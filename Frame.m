%{
    Properties of entity Frame :
        T - Length of frame time slot
        arr - array is used to implement
        rsp - remaining space in Frame 
    Methods of entity Frame :
        Frame() - constructor to initialise Frame properties
        insert() - method to insert into the frame
            x - the length of frame to be filled
            z - the content to be filled with
%}
classdef Frame
    properties
        T
        arr
        rsp
    end
    methods
        function obj = Frame(T)
            obj.T = T
            obj.rsp = T
            obj.arr = zeros(1,T)
        end
        function r = insert(x,z)
            for i = 1:1:T
                if obj.arr(i) == 0
                    break
                end
            end
            if i+x-1 <= T             
                for j = i:i+x-1
                    obj.arr(j) = z;
                end
                obj.rsp = length(obj.frame) - j;
            else
                disp('u cant insert')
            end
        end
    end
end
