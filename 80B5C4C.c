int NamingScreen_ClearVram()
{
  signed int v0; // r2@1
  unsigned int v1; // r3@1
  __int16 v3; // [sp+0h] [bp-18h]@2
  int v4; // [sp+14h] [bp-4h]@3

  v0 = 100663296;
  v1 = 0x10000;
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
  v40000D8 = v0;
  v40000DC = (v1 >> 1) | 0x81000000;
  return v4;
}
