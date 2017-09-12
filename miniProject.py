import os
import time

def getFileSize(myFile):
    statinfo = os.stat(myFile)
    return statinfo.st_size


def file_generator_by_size(fileName,size = 1024*1024*1024):
    fp = open(fileName,'w')
    fp.write("test____")
    fp.close()
    while (getFileSize(fileName) < size):
        f = open(fileName,'a+')
        f.seek(0)
        f.write(f.read())


#-----------------------------------------------------------------------------------------------------------


## create 1GB_FILE
if not (os.path.isfile('1GB_FILE.txt')):
    file_generator_by_size("1GB_FILE.txt")


## copying 1GB_FILE
start_time = time.time()
f1 = open('1GB_FILE.txt','r')
f2 = open('copy_1GB_File.txt', 'w')
f1.seek(0)
f2.write(f1.read())
f1.close()
f2.close()
print("1GB copy Time\n",time.time()-start_time)


#-----------------------------------------------------------------------------------------------------------
## create 2GB_FILE
if not (os.path.isfile('2GB_FILE.txt')):
    file_generator_by_size("2GB_FILE.txt",2*1024*1024*1024)

#copying 2GB_FILE
start_time = time.time()
f1 = open('2GB_FILE.txt','r')
f2 = open('copy_2GB_File.txt', 'w')
f1.seek(0)
f2.write(f1.read())
f1.close()
f2.close()
print("2GB copy Time\n",time.time()-start_time)


#-----------------------------------------------------------------------------------------------------------
## create 3GB_FILE
if not (os.path.isfile('1GB_FILE.txt')):
    file_generator_by_size("1GB_FILE.txt")
if not (os.path.isfile('2GB_FILE.txt')):
    file_generator_by_size("2GB_FILE.txt",2*1024*1024*1024)

if not (os.path.isfile('3GB_FILE.txt')):
    f1 = open('1GB_FILE.txt', 'r')
    f2 = open('2GB_FILE.txt','r')
    f1.seek(0)
    f2.seek(0)
    f3 = open('3GB_FILE.txt','a+')
    f3.write(f1.read())
    f3.write(f2.read())

    f1.close()
    f2.close()
    f3.close()

#copying 3GB_FILE
start_time = time.time()
f1 = open('3GB_FILE.txt','r')
f2 = open('copy_3GB_File.txt', 'w')
f1.seek(0)
f2.write(f1.read())
f1.close()
f2.close()
print("3GB copy Time\n",time.time()-start_time)

#-----------------------------------------------------------------------------------------------------------
## create 4GB_FILE
if not (os.path.isfile('2GB_FILE.txt')):
    file_generator_by_size("2GB_FILE.txt",2*1024*1024*1024)
if not (os.path.isfile('4GB_FILE.txt')):
    f2 = open('2GB_FILE.txt', 'r')
    f2.seek(0)
    f4 = open('4GB_FILE.txt', 'a+')
    f4.write(f2.read())
    f2.seek(0)
    f4.write(f2.read())
    f2.close()
    f4.close()

#copying 4GB_FILE
start_time = time.time()
f1 = open('4GB_FILE.txt', 'r')
f2 = open('copy_4GB_File.txt', 'w')
f1.seek(0)
f2.write(f1.read())
f1.close()
f2.close()
print("4GB copy Time\n",time.time()-start_time)

#-----------------------------------------------------------------------------------------------------------
## create 5GB_FILE
if not (os.path.isfile('5GB_FILE.txt')):
    if not (os.path.isfile('1GB_FILE.txt')):
        file_generator_by_size("1GB_FILE.txt", 1024 * 1024 * 1024)
    if not (os.path.isfile('2GB_FILE.txt')):
        file_generator_by_size("2GB_FILE.txt", 2 * 1024 * 1024 * 1024)
    f1 = open('1GB_FILE.txt', 'r')
    f1.seek(0)
    f2 = open('2GB_FILE.txt', 'r')
    f2.seek(0)

f5 = open('5GB_FILE.txt', 'a+')
f5.write(f2.read())
f2.seek(0)
f5.write(f2.read())
f5.write(f1.read())

f1.close()
f2.close()
f5.close()


# copying 5GB_FILE
start_time = time.time()
f1 = open('5GB_FILE.txt', 'r')
f2 = open('copy_5GB_File.txt', 'w')
f1.seek(0)
f2.write(f1.read())
f1.close()
f2.close()
print("5GB copy Time\n",time.time()-start_time)

