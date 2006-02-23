 Copyright 2006 Sony Computer Entertainment Inc.

 Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 file except in compliance with the License. You may obtain a copy of the License at:
 http://research.scea.com/scea_shared_source_license.html

 Unless required by applicable law or agreed to in writing, software distributed under the License 
 is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 implied. See the License for the specific language governing permissions and limitations under the 
 License.

========================================================================
    CONSOLE APPLICATION : sample_channels
========================================================================


This program loads a COLLADA file with animation channels and samples the
function curves at regular intervals.

Running the program without arguments prints a "usage" information:

Usage: sample_channels -i <input_file> -o <output_file> -r <sampling_rate>

Example. Sample channels at 60Hz (assuming 1 time unit = 1 sec):
 sample_channels -i anim.dae -o anim_sampled_at_60Hz.dae -r 0.166

Limitations:
* Only linear key-frame interpolation is supported.
* Only scalar function-curves are supported (no combined channels of X,Y,Z etc.)
* There is no "deep" error-checking (array/accessor count consistency etc.)

=======
Note that because this uses the COLLADA API to read the entire file into 
memory and write it back out again, the formatting of the output file may 
not match the input file.  Tags attributes and parameters may be reordered 
by the API.  
