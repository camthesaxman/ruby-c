int __fastcall sub_80AFBA0(signed __int16 a1, __int16 a2, unsigned __int8 a3)
{
  signed __int16 v3; // r5@1
  __int16 v4; // r8@1
  int v5; // r7@1
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r5@1
  int *v9; // r2@1
  int v10; // r3@1
  int *v11; // r1@1
  int v12; // r0@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_BYTE *)(4 * a3 + 0x201933A) |= 4u;
  v6 = (unsigned __int8)CreateTask((int)sub_80AFC74, 20);
  v7 = (char)sub_80AFB74(v3);
  v8 = (sub_80AFB74(v3 + v4) - (char)v7) & 0xFF;
  sub_80AFB40(v5);
  v9 = dword_3004B20;
  v10 = 4 * v6;
  v11 = &dword_3004B20[10 * v6];
  LOWORD(v12) = (char)v7;
  if ( (char)v7 < 0 )
    v12 = -v7;
  *((_WORD *)v11 + 4) = v12;
  *((_WORD *)v11 + 5) = (char)v8;
  if ( v7 <= 0 && (v7 || (char)v8 <= 0) )
  {
    v9 = dword_3004B20;
    v10 = 4 * v6;
    LOWORD(dword_3004B20[10 * v6 + 3]) = -1;
  }
  else
  {
    *((_WORD *)v11 + 6) = 1;
  }
  HIWORD(v9[2 * (v10 + v6) + 3]) = v5;
  if ( v4 & 0x8000 )
    nullsub_19(v5);
  return v6;
}
