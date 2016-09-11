int __fastcall sub_8095050(unsigned __int8 a1, unsigned __int8 a2, int a3)
{
  int v3; // r6@1
  int v4; // r0@1
  signed __int16 v5; // r4@2
  int *v6; // r3@3
  int *v7; // r0@3
  int v9; // [sp+Ch] [bp-4h]@0

  v3 = a1;
  v4 = GetMonData((int)&dword_3004360[25 * a2], 45, a3);
  if ( v4 )
  {
    v6 = dword_3004B20;
    v7 = &dword_3004B20[10 * v201B260];
    v5 = 2;
    goto _080950DE;
  }
  v5 = v2038473;
  if ( v2038473 == 1 )
  {
    v6 = dword_3004B20;
    v7 = &dword_3004B20[10 * v201B260];
_080950DE:
    *((_WORD *)v7 + 8) = v5;
    HIWORD(v6[10 * v201B260 + 4]) = v5;
    goto _080950EC;
  }
  v6 = dword_3004B20;
  LOWORD(dword_3004B20[10 * v201B260 + 4]) = v4;
  HIWORD(dword_3004B20[10 * v201B260 + 4]) = v4;
_080950EC:
  sub_806E750(v6[10 * v3 + 4], (int)&gUnknown_083B5FF4);
  return v9;
}
