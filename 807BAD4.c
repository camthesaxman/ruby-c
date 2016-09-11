int __fastcall sub_807BAD4(unsigned __int8 a1)
{
  int *v1; // r2@1
  __int16 v2; // r3@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 5) - 1;
  *((_WORD *)v1 + 5) = v2;
  if ( v2 == -1 )
  {
    *v1 = (int)sub_807BB24;
    *((_WORD *)v1 + 5) = 0;
  }
  else
  {
    v4000052 = ((16 - (unsigned __int8)v2) << 8) | (unsigned __int8)v2;
  }
  return v4;
}
