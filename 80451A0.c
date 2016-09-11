int __fastcall sub_80451A0(unsigned __int8 a1, int a2)
{
  int v2; // r7@1
  int v3; // r9@1
  _BYTE *v4; // r0@1
  int v5; // r5@1
  signed int v6; // r6@1
  int v7; // r2@1
  unsigned __int16 v8; // r4@1
  int v9; // r2@1
  unsigned __int8 v10; // r0@1
  int v11; // r5@5
  char v12; // r0@6
  int v13; // r5@9
  signed int v14; // r6@9
  int v15; // r2@9
  int v16; // r0@9
  int v17; // r2@9
  signed int v18; // r4@11
  int v19; // r1@11
  int v20; // r7@12
  int v21; // r0@17
  char *v22; // r0@22
  int v23; // r4@25
  int v24; // r6@25
  char *v25; // r0@26
  char *v26; // r6@27
  char *v27; // r8@29
  void *v28; // r9@29
  signed int v29; // r6@29
  int v30; // r4@30
  int v31; // r5@30
  char *v32; // r4@32
  int v33; // r0@32
  void *v34; // r1@32
  char *v35; // r8@34
  void *v36; // r9@34
  signed int v37; // r6@34
  int v38; // r4@35
  int v39; // r5@35
  int v41; // [sp+0h] [bp-30h]@1
  int v42; // [sp+Ch] [bp-24h]@9
  int v43; // [sp+2Ch] [bp-4h]@36

  v2 = a2;
  v3 = a1;
  StringCopy((_BYTE *)0x20238CC, &gUnknown_0820A8B0);
  GetMonData(v2, 2, (int)&v41);
  StringGetEnd10((int)&v41);
  v4 = StringCopy((_BYTE *)0x20238CF, &v41);
  *v4 = -4;
  v4[1] = 3;
  v4[2] = 2;
  v4[3] = -4;
  v4[4] = 1;
  v5 = (int)(v4 + 5);
  v6 = (unsigned __int8)GetMonGender();
  v8 = GetMonData(v2, 11, v7);
  v10 = GetMonData(v2, 3, v9);
  if ( sub_8040D3C(v8, (int)&v41, v10) )
    v6 = 100;
  if ( !v6 )
  {
    *(_BYTE *)v5 = 11;
    v12 = -75;
_0804524E:
    *(_BYTE *)(v5 + 1) = v12;
    *(_BYTE *)(v5 + 2) = -1;
    v11 = v5 + 2;
    goto _08045256;
  }
  if ( v6 == 254 )
  {
    *(_BYTE *)v5 = 10;
    v12 = -74;
    goto _0804524E;
  }
  *(_BYTE *)v5 = 11;
  *(_BYTE *)(v5 + 1) = -1;
  v11 = v5 + 1;
_08045256:
  *(_BYTE *)v11 = -4;
  *(_BYTE *)(v11 + 1) = 19;
  *(_BYTE *)(v11 + 2) = 55;
  *(_BYTE *)(v11 + 3) = -1;
  v13 = 384 * (unsigned __int8)battle_get_per_side_status(*(_WORD *)&gSprites[68 * v3 + 58] & 0xFF) + 33555744;
  sub_80034D4(v13, 33700044);
  v14 = 0;
  v16 = GetMonData(v2, 3, v15);
  v42 = 16 * v3;
  if ( v16 == 1 && !GetMonData(v2, 45, v17) )
  {
    v18 = 33700044;
    v19 = v20238CC;
    if ( v20238CC != 255 )
    {
      v20 = v13;
      do
      {
        if ( v19 == 252 )
        {
          v18 += (unsigned __int8)GetExtCtrlCodeLength(*(_BYTE *)(v18 + 1)) + 1;
        }
        else
        {
          if ( ((v19 - 55) & 0xFFu) > 0x13 && ((v19 + 121) & 0xFFu) > 0x13 )
          {
            if ( ((v19 - 75) & 0xFFu) > 4 && ((v19 + 101) & 0xFFu) > 4 )
              v21 = 43;
            else
              v21 = 45;
          }
          else
          {
            v21 = 44;
          }
          v22 = sub_8043CDC(v21);
          CpuSet(v22, v20, 67108872);
          v20 += 64;
          ++v14;
          ++v18;
        }
        v19 = *(_BYTE *)v18;
      }
      while ( v19 != 255 );
    }
  }
  if ( v14 < 7 )
  {
    v23 = (v14 << 6) + v13;
    v24 = 7 - v14;
    do
    {
      v25 = sub_8043CDC(43);
      CpuSet(v25, v23, 67108872);
      v23 += 64;
      --v24;
    }
    while ( v24 );
  }
  v26 = &gSprites[4 * (v42 + v3)];
  if ( battle_side_get_owner(*((_WORD *)v26 + 29) & 0xFF) << 24 || battle_type_is_double(0) << 24 )
  {
    v32 = &gSprites[4 * (v42 + v3)];
    v33 = battle_side_get_owner(*((_WORD *)v32 + 29) & 0xFF);
    v34 = &gUnknown_0820A8DC;
    if ( !(v33 << 24) )
      v34 = &gUnknown_0820A904;
    v35 = v32;
    v36 = v34;
    v37 = 7;
    do
    {
      v36 = (char *)v36 + 4;
      v38 = *((_DWORD *)v36 - 1) + (32 * *((_WORD *)v35 + 2) & 0x7FFF);
      CpuSet(v13, v38, 67108872);
      v39 = v13 + 32;
      CpuSet(v39, v38 + 256, 67108872);
      v13 = v39 + 32;
      --v37;
    }
    while ( v37 );
  }
  else
  {
    v27 = v26;
    v28 = &gUnknown_0820A8B4;
    v29 = 7;
    do
    {
      v28 = (char *)v28 + 4;
      v30 = *((_DWORD *)v28 - 1) + (32 * *((_WORD *)v27 + 2) & 0x7FFF);
      CpuSet(v13, v30, 67108872);
      v31 = v13 + 32;
      CpuSet(v31, v30 + 256, 67108872);
      v13 = v31 + 32;
      --v29;
    }
    while ( v29 );
  }
  return v43;
}
