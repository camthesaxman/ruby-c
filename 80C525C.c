int sub_80C525C()
{
  unsigned int v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( v203869A & 1 )
  {
    dword_3005D28 = 1103515245 * dword_3005D28 + 24691;
    v0 = (unsigned int)dword_3005D28 >> 16;
  }
  else
  {
    v0 = (unsigned __int16)Random();
  }
  v202E8DC = v0 % v202E8DC;
  return v2;
}
