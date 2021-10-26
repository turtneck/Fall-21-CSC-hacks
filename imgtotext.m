clear;
clc;

%\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
%
%           IMAGE PROCESSING
%
%\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

%hard coded (0=img, 1=video)
option=0;
scale = 8;

if option == 0
    file = imread('input.jpg');
    file = imresize(file,[scale,scale]);
    
    arr = zeros(scale,scale);
    for( i = 1:scale)
        for( j = 1:scale)
            %tot = file(i,j,1)
            %tot = tot + file(i,j,2)
            %tot = tot + file(i,j,3)
            %tot = round(tot/3)
            %^^^was having issue with scaling the number over 255 
            
            %so just did this and fuck it it works
            A = [ file(i,j,1) file(i,j,2) file(i,j,3)];
            tot = mean(A);
            
            arr(i,j) = tot;
            
        end
        tot=0;
    end
    
    max = max(max(arr));
    min = min(min(arr));
    avg = floor( (max+min) / 2);
    
    finarr = zeros(scale,scale);
    
    for( i = 1:scale)
        for( j = 1:scale)
            
            if( arr(i,j) >= avg )
                 finarr(i,j) = 0;
            else
                finarr(i,j) = 255;
            end
            
        end
    end
    
end

%imshow(file);
%imshow(finarr);
imwrite(finarr,'fin_img_preview.jpg','JPEG');

%\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\
%
%           FILE FOR C++ WRITING
%
%\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\


%only set up for 8x8 rn
txtfile = fopen('img_text_file.txt','w');
fprintf(txtfile,'%5d %5d %5d %5d %5d %5d %5d %5d\n', transpose(finarr));



