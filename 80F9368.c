int sub_80F9368()
{
  signed int v0; // r3@1
  unsigned int v1; // r4@1
  __int16 v3; // [sp+0h] [bp-20h]@2
  int v4; // [sp+1Ch] [bp-4h]@3

  v4000000 = 0;
  v400000E = 0;
  v400000C = 0;
  v400000A = 0;
  v4000008 = 0;
  v400001C = 0;
  v400001E = 0;
  v4000018 = 0;
  v400001A = 0;
  v4000014 = 0;
  v4000016 = 0;
  v4000010 = 0;
  v4000012 = 0;
  v0 = 100663296;
  v1 = 98304;
  do
  {
    v3 = 0;
    v40000D4 = &v3;
    v40000D8 = v0;
    v40000DC = -2130704384;
    v0 += 4096;
    v1 -= 4096;
  }
  while ( v1 > 0x1000 );
  v40000D4 = &v3;
  v40000D8 = 83886080;
  v40000DC = -2130705920;
  return v4;
}
