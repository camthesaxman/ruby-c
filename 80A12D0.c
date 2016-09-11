int __fastcall sub_80A12D0(char a1)
{
  char v1; // r4@1
  int v2; // r2@1
  int *v3; // r1@1
  signed __int16 v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(1u, 0x12u, 5u, 0x13u);
  sub_80A18E4(29);
  v2 = (unsigned __int8)CreateTask((int)sub_80A1048, 0);
  v3 = &dword_3004B20[10 * v2];
  *((_WORD *)v3 + 4) = v1;
  if ( v1 >= 0 )
    v4 = 0;
  else
    v4 = 10;
  *((_WORD *)v3 + 5) = v4;
  LOWORD(dword_3004B20[10 * v2 + 3]) = 1;
  return v6;
}
