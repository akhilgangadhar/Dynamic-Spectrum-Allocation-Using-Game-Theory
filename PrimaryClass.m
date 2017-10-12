%{
    T - Length of PU's time-slot 
    x - The part of the time slot used by PU
    frame - PUs frame
    z - sloted filled with z denotes the part used by PU in the frame
%}
classdef PrimaryClass
    properties
        T              
        x 
        frame
        z
    end
    methods
        function obj = PrimaryClass(T,x,z)
            obj.T = T;
            obj.x = x;
            obj.z = z;
            obj.frame = zeros(1,obj.T);
        end
        function [frame,rsp] = insertFrame(obj)
            for i = 1:1:length(obj.frame)
                if obj.frame(i) == 0
                    break
                end
            end
            if i+obj.x-1 <= length(obj.frame)             
                for j = i:i+obj.x-1
                    obj.frame(j) = obj.z;
                end
                rsp = length(obj.frame) - j;
            else
                disp('u cant insert')
            end
        end
    end
end
