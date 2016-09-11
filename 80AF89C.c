int __fastcall unref_sub_80AF89C(__int16 a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int16 v4; // r4@1
  __int16 v5; // r6@1
  __int16 v6; // r8@1
  int v7; // r9@1
  int v8; // r7@1
  int v9; // r5@1
  int v10; // r4@1
  __int16 v11; // r0@1
  int *v12; // r1@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(_BYTE *)(4 * v7 + 0x201933A) |= 4u;
  v8 = (unsigned __int8)CreateTask((int)sub_80AF94C, 20);
  v9 = (unsigned __int8)sub_80AFB74(v4);
  v10 = (sub_80AFB74((signed __int16)(v4 + v5)) - v9) & 0xFF;
  v11 = sub_80AFB40(v7);
  v12 = &dword_3004B20[10 * v8];
  *((_WORD *)v12 + 4) = v9;
  *((_WORD *)v12 + 5) = (char)v10;
  *((_WORD *)v12 + 6) = v11 + v6;
  *((_WORD *)v12 + 7) = v7;
  if ( v5 < 0 )
    nullsub_19(v7);
  return v8;
}
