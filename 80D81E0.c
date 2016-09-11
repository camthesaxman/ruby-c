int __fastcall sub_80D81E0(unsigned __int8 a1)
{
  int v1; // r6@1
  __int16 *v2; // r2@1
  unsigned int v3; // r0@1
  __int16 *v4; // r4@1
  int *v5; // r3@3
  __int16 v6; // r0@3
  __int16 v7; // r1@4
  int *v8; // r3@6
  __int16 v9; // r0@6
  int *v10; // r3@8
  __int16 v11; // r0@8
  __int16 v12; // r1@9
  int v13; // r2@11
  unsigned int v14; // r3@11
  int v16; // [sp+0h] [bp-30h]@11
  int v17; // [sp+4h] [bp-2Ch]@13
  int v18; // [sp+Ch] [bp-24h]@12
  int v19; // [sp+2Ch] [bp-4h]@17

  v1 = a1;
  v2 = &word_30042C0;
  --word_30042C0;
  v3 = LOWORD(dword_3004B20[10 * a1 + 8]);
  v4 = &word_30041B4;
  if ( v3 <= 4 )
  {
    switch ( v3 )
    {
      case 0u:
        v5 = &dword_3004B20[10 * v1];
        v6 = *((_WORD *)v5 + 14) + 1;
        *((_WORD *)v5 + 14) = v6;
        if ( v6 == 4 )
        {
          *((_WORD *)v5 + 14) = 0;
          v7 = gUnknown_083D9D6C[++*((_WORD *)v5 + 13)];
          *((_WORD *)v5 + 15) = v7;
          v4000052 = v7 | ((16 - v7) << 8);
          if ( *((_WORD *)v5 + 15) == 9 )
          {
            ++*((_WORD *)v5 + 16);
            *((_WORD *)v5 + 15) = 0;
          }
        }
        break;
      case 1u:
        v8 = &dword_3004B20[10 * v1];
        v9 = *((_WORD *)v8 + 15) + 1;
        *((_WORD *)v8 + 15) = v9;
        if ( v9 == 81 )
        {
          *((_WORD *)v8 + 15) = 9;
          ++*((_WORD *)v8 + 16);
        }
        break;
      case 2u:
        v10 = &dword_3004B20[10 * v1];
        v11 = *((_WORD *)v10 + 14) + 1;
        *((_WORD *)v10 + 14) = v11;
        if ( v11 == 4 )
        {
          *((_WORD *)v10 + 14) = 0;
          v12 = *((_WORD *)v10 + 15) - 1;
          *((_WORD *)v10 + 15) = v12;
          v4000052 = v12 | ((16 - v12) << 8);
          if ( !*((_WORD *)v10 + 15) )
          {
            ++*((_WORD *)v10 + 16);
            *((_WORD *)v10 + 15) = 0;
          }
        }
        break;
      case 3u:
        sub_8078914((int)&v16);
        v13 = v16;
        v14 = 0x2000;
        do
        {
          v18 = 0;
          v40000D4 = &v18;
          v40000D8 = v13;
          v40000DC = -2063596544;
          v13 += 4096;
          v14 -= 4096;
        }
        while ( v14 > 0x1000 );
        v18 = 0;
        v40000D4 = &v18;
        v40000D8 = v17;
        v40000DC = -2063597056;
        if ( !(sub_8076BE0() << 24) )
          v400000A &= 0xF3u;
        ++LOWORD(dword_3004B20[10 * v1 + 8]);
        v2 = &word_30042C0;
        v4 = &word_30041B4;
        goto _080D838C;
      case 4u:
_080D838C:
        *v2 = 0;
        *v4 = 0;
        v4000050 = 0;
        v4000052 = 0;
        v400000A = v400000A & 0xFC | 1;
        move_anim_task_del(v1);
        break;
      default:
        return v19;
    }
  }
  return v19;
}
