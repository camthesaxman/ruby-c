int __fastcall sub_812D7E8(int a1)
{
  int v1; // r8@1
  unsigned int v2; // r0@1
  _BYTE *v3; // r0@4
  int *v4; // r1@6
  int *v5; // r4@7
  __int16 v6; // r0@7
  int v7; // r2@8
  int v8; // r1@11
  _BOOL4 v9; // r4@14
  int v10; // r6@15
  signed int v11; // r5@15
  signed int v12; // r12@15
  int v13; // r7@15
  signed int v14; // r4@16
  __int16 *v15; // r3@16
  __int16 *v16; // r2@16
  __int16 v17; // r1@17
  int v18; // r5@19
  int v19; // r2@20
  _WORD *v20; // r1@20
  signed int v21; // r4@20
  char *v22; // r3@24
  char *v23; // r0@24
  void **v24; // r1@24
  __int16 v25; // r0@29
  int v26; // r2@30
  _BYTE *v27; // r2@33
  int v29; // [sp+0h] [bp-28h]@10
  int v30; // [sp+4h] [bp-24h]@15
  int v31; // [sp+24h] [bp-4h]@40

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * (unsigned __int8)a1 + 2]);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v400004C = 0;
        if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
          v3 = (_BYTE *)67108874;
        else
          v3 = (_BYTE *)67108876;
        *v3 |= 0x40u;
        v4 = &dword_3004B20[10 * v1];
        *((_WORD *)v4 + 14) = word_3004B00[0];
        goto _0812DA2A;
      case 1u:
        v5 = &dword_3004B20[10 * v1];
        v6 = *((_WORD *)v5 + 6);
        *((_WORD *)v5 + 6) = v6 + 1;
        if ( v6 > 1 )
        {
          *((_WORD *)v5 + 6) = 0;
          v7 = ++*((_WORD *)v5 + 5);
          v400004C = 16 * v7 | v7;
          if ( v7 == 15 )
            goto _0812DA78;
        }
        break;
      case 2u:
        sub_8031FC4(v202F7C8, v202F7C9, LOBYTE(dword_3004B20[10 * v1 + 7]));
        sub_8078954((int)&v29);
        if ( sub_8076BE0() << 24 )
          v8 = 0;
        else
          v8 = battle_get_per_side_status(v202F7C8) & 0xFF;
        v40000D4 = gUnknown_081FAF4C[v8] + (*(_BYTE *)(v202F7C8 + 0x2024E84) << 11);
        v40000D8 = v29;
        v40000DC = -2080374272;
        if ( sub_8076BE0() << 24 )
        {
          v9 = sub_80AEB1C(v2019348);
          if ( v9 << 24 != sub_80AEB1C(v201934A) << 24 )
          {
            v10 = v30;
            v11 = 0;
            v12 = 7;
            v13 = 0;
            do
            {
              v14 = 0;
              v15 = (__int16 *)(v13 + v10);
              v16 = (__int16 *)(2 * v12 + v10);
              do
              {
                v17 = *v15;
                *v15 = *v16;
                *v16 = v17;
                ++v15;
                --v16;
                ++v14;
              }
              while ( v14 <= 3 );
              v12 += 32;
              v13 += 64;
              ++v11;
            }
            while ( v11 <= 7 );
            v18 = 0;
            do
            {
              v19 = v18 + 1;
              v20 = (_WORD *)((v18 << 6) + v10);
              v21 = 7;
              do
              {
                *v20 ^= 0x400u;
                ++v20;
                --v21;
              }
              while ( v21 >= 0 );
              ++v18;
            }
            while ( v19 <= 7 );
          }
          if ( sub_80AEB1C(v201934A) << 24 )
          {
            v22 = gSprites;
            v23 = (char *)&unk_2020014 + 68 * *(_BYTE *)(v202F7C8 + 0x2024BE0);
            v24 = &gSpriteAffineAnimTable_81E7C18;
          }
          else
          {
            v22 = gSprites;
            v23 = (char *)&unk_2020014 + 68 * *(_BYTE *)(v202F7C8 + 0x2024BE0);
            v24 = &gSpriteAffineAnimTable_81E7BEC;
          }
          *(_DWORD *)v23 = v24;
          StartSpriteAffineAnim((int)&v22[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)], 0);
        }
        v4 = &dword_3004B20[10 * v1];
_0812DA2A:
        ++*((_WORD *)v4 + 4);
        break;
      case 3u:
        v5 = &dword_3004B20[10 * v1];
        v25 = *((_WORD *)v5 + 6);
        *((_WORD *)v5 + 6) = v25 + 1;
        if ( v25 > 1 )
        {
          *((_WORD *)v5 + 6) = 0;
          v26 = --*((_WORD *)v5 + 5);
          v400004C = 16 * v26 | v26;
          if ( !v26 )
_0812DA78:
            ++*((_WORD *)v5 + 4);
        }
        break;
      case 4u:
        v400004C = 0;
        if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C8) == 1 )
          v27 = (_BYTE *)67108874;
        else
          v27 = (_BYTE *)67108876;
        *v27 &= 0xBFu;
        if ( !(sub_8076BE0() << 24)
          && (unsigned __int8)battle_side_get_owner(v202F7C8) == 1
          && !LOWORD(dword_3004B20[10 * v1 + 7]) )
        {
          sub_8032984(v202F7C8, *(_WORD *)(4 * v202F7C8 + 0x2017802));
        }
        move_anim_task_del(v1);
        break;
      default:
        return v31;
    }
  }
  return v31;
}
