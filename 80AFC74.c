int __fastcall sub_80AFC74(unsigned __int8 a1)
{
  int v1; // r8@1
  int *v2; // r4@1
  int v3; // r7@1
  int v4; // r3@1
  int v5; // r1@1
  __int16 v6; // r0@1
  __int16 v7; // r2@2
  int v8; // r9@5
  int v9; // r6@6
  __int16 v10; // r0@6
  int *v11; // r0@8
  __int16 v12; // r1@8
  unsigned int v13; // r5@8
  __int16 v14; // r0@11
  int v15; // r0@11
  __int16 v16; // r0@12
  __int16 v17; // r0@14
  __int16 v18; // r0@15
  __int16 v19; // r10@17
  __int16 v21; // [sp+0h] [bp-24h]@19
  int v22; // [sp+20h] [bp-4h]@25

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_BYTE *)v2 + 14);
  v4 = *((_WORD *)v2 + 4);
  v5 = *((_WORD *)v2 + 5);
  v6 = *((_WORD *)v2 + 14) + 1;
  *((_WORD *)v2 + 14) = v6;
  if ( v6 <= 14 )
    return v22;
  *((_WORD *)v2 + 14) = 0;
  v7 = *((_WORD *)v2 + 5);
  if ( !*((_WORD *)v2 + 5) )
  {
    nullsub_19(v3);
    DestroyTask(v1);
    *(_BYTE *)(4 * v3 + 0x201933A) &= 0xFBu;
    return v22;
  }
  if ( !v4 )
  {
    v8 = v5 << 16;
    if ( v5 & 0x8000 )
    {
      v9 = (sub_80AFB40(v3) + 2) & 0xFFFF;
      v10 = *((_WORD *)v2 + 5) + 1;
    }
    else
    {
      v9 = (unsigned __int16)sub_80AFB40(v3);
      v10 = *((_WORD *)v2 + 5) - 1;
    }
    *((_WORD *)v2 + 5) = v10;
    v11 = &dword_3004B20[10 * v1];
    v12 = *((_WORD *)v11 + 4);
    *((_WORD *)v11 + 4) = v12 + 1;
    v13 = (unsigned __int8)v12;
    goto _080AFD94;
  }
  if ( (signed int)*((_WORD *)v2 + 6) >= 0 )
  {
    v8 = v5 << 16;
    if ( !(v5 & 0x8000) )
    {
      v18 = *((_WORD *)v2 + 4);
      *((_WORD *)v2 + 4) = v18 + 1;
      v13 = (unsigned __int8)v18;
      *((_WORD *)v2 + 5) = v7 - 1;
      LOWORD(v15) = sub_80AFB40(v3);
      goto _080AFD90;
    }
    v17 = *((_WORD *)v2 + 4) - 1;
    *((_WORD *)v2 + 4) = v17;
    v13 = (unsigned __int8)v17;
    v9 = 0;
    *((_WORD *)v2 + 5) = v7 + 1;
  }
  else
  {
    v8 = v5 << 16;
    if ( v5 & 0x8000 )
    {
      v14 = *((_WORD *)v2 + 4);
      *((_WORD *)v2 + 4) = v14 + 1;
      v13 = (unsigned __int8)v14;
      *((_WORD *)v2 + 5) = v7 + 1;
      v15 = sub_80AFB40(v3) + 2;
_080AFD90:
      v9 = (unsigned __int16)v15;
      goto _080AFD94;
    }
    v16 = *((_WORD *)v2 + 4) - 1;
    *((_WORD *)v2 + 4) = v16;
    v13 = (unsigned __int8)v16;
    v9 = 0;
    *((_WORD *)v2 + 5) = v7 - 1;
  }
_080AFD94:
  v19 = v13;
  if ( v13 > 7 )
    v13 = (v13 + 24) & 0xFF;
  v21 = v9;
  CpuSet(&v21, 2 * (v13 + 160 * *(_BYTE *)(v3 + 33785494) + 86) + 100712448, 16777217);
  if ( v8 <= 0 )
  {
    audio_play(0x16u);
  }
  else
  {
    audio_play(0x60u);
    m4aMPlayImmInit(&unk_30073C0);
    m4aMPlayPitchControl(&unk_30073C0, 0xFFFF, (signed __int16)(v19 << 8));
  }
  if ( !v13 && !v9 )
    LOWORD(dword_3004B20[10 * v1 + 3]) = -LOWORD(dword_3004B20[10 * v1 + 3]);
  return v22;
}
