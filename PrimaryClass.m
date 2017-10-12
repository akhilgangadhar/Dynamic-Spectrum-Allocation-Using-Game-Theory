%{
    T - Length of PU's time-slot 
    x - The part of the time slot used by PU
    z - sloted filled with z denotes the part used by PU in the frame
%}

classdef PrimaryClass
    properties
        T              
        x 
        z
    end
    methods
        function obj = PrimaryClass(T,x,z)
            obj.T = T;
            obj.x = x;
            obj.z = z;  
        end
    end
end
