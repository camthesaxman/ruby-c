int __fastcall sub_81426F8(unsigned __int8 a1)
{
  int *v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v1 + 7) <= 15 )
  {
    ++*((_WORD *)v1 + 7);
    v4000052 = HIWORD(dword_3004B20[10 * a1 + 3]) << 8;
  }
  else
  {
    *v1 = (int)sub_8142738;
  }
  return v3;
}
