int __fastcall sub_80DED60(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r1@1
  __int16 v3; // r5@1
  __int16 v4; // r7@1
  __int16 v5; // r10@1
  __int16 v6; // r8@1
  int v7; // r6@1
  int v8; // ST10_4@3
  int v9; // r1@3
  int v10; // ST14_4@3
  int v11; // r0@3
  int v12; // r4@3
  int v13; // r0@3
  int v14; // r1@3
  int v15; // r0@3
  int v16; // r0@3
  int v17; // r0@3
  int v18; // r0@3
  int v19; // r0@3
  int v20; // r1@3
  int v21; // r5@3
  int v22; // r4@3
  int v23; // r0@3
  int v24; // r0@3
  int v25; // r0@3
  int v26; // r1@3
  int v27; // r0@3
  int v28; // r0@3
  int v29; // r0@3
  int v30; // r0@3
  __int16 v31; // r9@2
  signed __int16 v32; // r7@2
  __int16 v33; // r6@2
  int v34; // r5@2
  unsigned __int16 v35; // r0@2
  __int16 v37; // [sp+Ch] [bp-34h]@1
  int v38; // [sp+3Ch] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  *((_WORD *)v1 + 4) = v2 + 1;
  v3 = *((_WORD *)v1 + 5);
  v4 = *((_WORD *)v1 + 6);
  v5 = *((_WORD *)v1 + 7);
  v37 = *((_WORD *)v1 + 8);
  v6 = *((_WORD *)v1 + 10);
  v7 = v2;
  if ( v2 <= 15 )
  {
    v8 = _floatsidf(*((_WORD *)v1 + 9));
    v10 = v9;
    v11 = _floatsidf(v3);
    v12 = _muldf3(v11);
    _floatsidf(v7);
    v13 = _muldf3(v12);
    v15 = _subdf3(v8, v10, v13, v14);
    v31 = _fixunsdfsi(v15);
    v16 = _floatsidf(v4);
    v17 = _muldf3(v16);
    _muldf3(v17);
    v18 = _adddf3(v8);
    v32 = _fixunsdfsi(v18);
    v19 = _floatsidf(v6);
    v21 = v20;
    v22 = v19;
    v23 = _floatsidf(v5);
    v24 = _muldf3(v23);
    v25 = _muldf3(v24);
    v27 = _subdf3(v22, v21, v25, v26);
    v33 = _fixunsdfsi(v27);
    v28 = _floatsidf(v37);
    v29 = _muldf3(v28);
    _muldf3(v29);
    v30 = _adddf3(v22);
    v34 = _fixunsdfsi(v30) & 0xFFFF;
  }
  else
  {
    v31 = 0;
    v32 = 240;
    v33 = 0;
    LOWORD(v34) = 112;
    v35 = sub_80791A8(1, 0, 0, 0, 0, 0, 0);
    BeginNormalPaletteFade(v35, 0, 0x10u, 0x10u, 0);
    *v1 = (int)sub_80DEEE8;
  }
  word_30042C4 = v32 | (v31 << 8);
  word_3004240 = v34 | (v33 << 8);
  return v38;
}
