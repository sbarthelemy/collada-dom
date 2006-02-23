/*
 * Copyright 2006 Sony Computer Entertainment Inc.
 *
 * Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 * file except in compliance with the License. You may obtain a copy of the License at:
 * http://research.scea.com/scea_shared_source_license.html
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 * implied. See the License for the specific language governing permissions and limitations under the 
 * License. 
 */
#ifndef _COMMAND_LINE_OPTIONS_H_
#define _COMMAND_LINE_OPTIONS_H_
//---------------------------------------------------------------------------
// CommandLineOptions
//
// Author: John Bates
// Date: 04/22/02
//
// Description: Creates a structure of command line parameters that can
//  be accessed by their string name. Prints out a formatted "usage" screen
//  based on the registered command line parameters if the input is not
//  acceptable.
//
//---------------------------------------------------------------------------

#include <map>
#include <set>
#include <vector>
#include <string>


class CommandLineOptions
{
  class PrintOut{
  public:
    virtual ~PrintOut(){}
    virtual void print(const CommandLineOptions* const clo) const=0;
  };
  class Heading : public PrintOut {
  public:
    virtual ~Heading();
    Heading();
    Heading(const Heading& rhs);
    Heading& operator=(const Heading& rhs);
    std::string name;
    virtual void print(const CommandLineOptions* const clo) const;
  };
  class Setting : public PrintOut {
  public:
    virtual ~Setting();
    Setting();
    Setting(const Setting& rhs);
    Setting& operator=(const Setting& rhs);
    std::string name, input, description;
    virtual void print(const CommandLineOptions* const clo) const;
  };
  class Option : public PrintOut { 
  public:
    virtual ~Option();
    Option();
    Option(const Option& rhs);
    Option& operator=(const Option& rhs);
    std::string name, description;
    virtual void print(const CommandLineOptions* const clo) const;
  };
  class Global : public PrintOut { 
  public:
    virtual ~Global();
    Global();
    Global(const Global& rhs);
    Global& operator=(const Global& rhs);
    std::string input, description;
    virtual void print(const CommandLineOptions* const clo) const;
  };
  class Example : public PrintOut { 
  public:
    virtual ~Example();
    Example();
    Example(const Example& rhs);
    Example& operator=(const Example& rhs);
    std::string input, description;
    virtual void print(const CommandLineOptions* const clo) const;
  };
private:
  std::set<std::string> names;
  std::map<std::string, std::string> aliases;
  std::vector<Setting*> settings;
  std::vector<Option*> options;
  std::vector<Global*> globals;
  std::vector<Example> examples;
  std::vector<PrintOut*> printouts;

  std::string binary_name;
  std::string title;
  
  std::map<std::string, std::string> isettings;
  std::set<std::string> ioptions;
  std::vector<std::string> iglobals;
  std::vector<std::string>::iterator global_it;

  // These private checks check for *support* of a setting or option
  bool _CheckForSetting(std::string& name) const;
  bool _CheckForOption(std::string& name) const;
  
  const std::string& _BaseName(const std::string& name) const;
  void _NewName(const std::string& name);
  void _AddAlias(const std::string& name, const std::string& alias);
  void _ExitUsage() const;
  
public:
  CommandLineOptions();
  CommandLineOptions(const CommandLineOptions *const clo); // For partial copies only
  ~CommandLineOptions();
  void Load(int argc, char *argv[]);
  void Unload();
  void PartiallyUnload();

  void SetTitle(const std::string& name);
  void AddHeading(const std::string& name);
  void AddExample(const std::string& example, const std::string& description);
  void AddSetting(const std::string& name, const std::string& input, const std::string& description);
  void AddSetting(const std::string& name, const std::string& input, const std::string& description, const std::string& alias);
  void AddOption(const std::string& name, const std::string& description);
  void AddOption(const std::string& name, const std::string& description, const std::string& alias);
  void AddGlobal(const std::string& input, const std::string& description);
  
  size_t NumSettings() const { return isettings.size(); }
  size_t NumOptions() const { return ioptions.size(); }
  size_t NumGlobals() const { return iglobals.size(); }

  // These public checks check for presence of the setting or option on the command line
  bool CheckForSetting(const std::string& name) const;
  bool CheckForOption(const std::string& name) const;
  bool CheckForGlobal() const { return !iglobals.empty(); }

  // Get methods for settings. Make sure you call CheckForSetting() first.
  std::string GetString(const std::string& name) const;
  long GetInt(const std::string& name) const;
  double GetFloat(const std::string& name) const;

  // Returns the next global, or false if there is none
  bool GetNextGlobal(std::string& s);

  void PrintUsage() const;
};


#endif


