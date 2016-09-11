int __fastcall sub_80C8FAC(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r2@2
  int v3; // r3@2
  int *v4; // r1@4
  int v5; // r2@4
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( v203855E == 175 )
  {
    v2 = 4 * a1;
    v3 = (HIWORD(dword_3004B20[10 * a1 + 9]) - 1) & 0xFF;
  }
  else
  {
    v3 = (itemid_get_type(v203855E) - 1) & 0xFF;
    v2 = 4 * v1;
  }
  v4 = &dword_3004B20[2 * (v2 + v1)];
  v5 = (int)*(&gUnknown_083D61E4 + v3);
  *((_WORD *)v4 + 12) = HIWORD(v5);
  *((_WORD *)v4 + 13) = v5;
  *v4 = (int)sub_80A5B00;
  return v7;
}
