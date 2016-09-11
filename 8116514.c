int __fastcall sub_8116514(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r4@1
  __int16 v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 5);
  *((_WORD *)v2 + 5) = v3 - 1;
  if ( v3 <= 1 )
  {
    sub_8116C34(v1, sub_8116638, 30, 0);
  }
  else if ( *((_WORD *)v2 + 5) % 16 )
  {
    if ( *((_WORD *)v2 + 5) % 16 == 8 )
    {
      sub_8117AA8(0, 255);
      sub_8117C60(0, 255);
    }
  }
  else
  {
    sub_8117AA8(0, *((_WORD *)v2 + 16) & 0xFF);
    sub_8117C60(0, (*((_BYTE *)v2 + 20) - 1) & 0xFF);
  }
  return v5;
}
