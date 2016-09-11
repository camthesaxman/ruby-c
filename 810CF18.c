int __fastcall sub_810CF18(unsigned __int8 a1)
{
  int *v1; // r3@1
  unsigned int v2; // r2@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 5);
  v4000052 = v2 + 4096;
  if ( v2 > 0x10 )
  {
    *((_WORD *)v1 + 6) = 0;
    *v1 = (int)sub_810CF5C;
  }
  else
  {
    ++*((_WORD *)v1 + 5);
  }
  return v4;
}
