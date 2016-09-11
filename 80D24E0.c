int __fastcall sub_80D24E0(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned int v2; // r0@1
  int *v3; // r3@3
  __int16 v4; // r0@3
  __int16 v5; // r1@4
  int *v6; // r1@6
  __int16 v7; // r0@6
  int *v8; // r3@8
  __int16 v9; // r0@8
  __int16 v10; // r1@9
  int v11; // r2@11
  unsigned int v12; // r3@11
  int v14; // [sp+0h] [bp-30h]@11
  int v15; // [sp+4h] [bp-2Ch]@13
  int v16; // [sp+Ch] [bp-24h]@12
  int v17; // [sp+2Ch] [bp-4h]@17

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * a1 + 8]);
  if ( v2 <= 4 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = &dword_3004B20[10 * v1];
        v4 = *((_WORD *)v3 + 14) + 1;
        *((_WORD *)v3 + 14) = v4;
        if ( v4 == 2 )
        {
          *((_WORD *)v3 + 14) = 0;
          v5 = *((_WORD *)v3 + 15) + 1;
          *((_WORD *)v3 + 15) = v5;
          v4000052 = v5 | ((16 - v5) << 8);
          if ( *((_WORD *)v3 + 15) == 14 )
          {
            ++*((_WORD *)v3 + 16);
            *((_WORD *)v3 + 15) = 0;
          }
        }
        break;
      case 1u:
        v6 = &dword_3004B20[10 * v1];
        v7 = *((_WORD *)v6 + 15) + 1;
        *((_WORD *)v6 + 15) = v7;
        if ( v7 == 21 )
        {
          *((_WORD *)v6 + 15) = 14;
          ++*((_WORD *)v6 + 16);
        }
        break;
      case 2u:
        v8 = &dword_3004B20[10 * v1];
        v9 = *((_WORD *)v8 + 14) + 1;
        *((_WORD *)v8 + 14) = v9;
        if ( v9 == 2 )
        {
          *((_WORD *)v8 + 14) = 0;
          v10 = *((_WORD *)v8 + 15) - 1;
          *((_WORD *)v8 + 15) = v10;
          v4000052 = v10 | ((16 - v10) << 8);
          if ( !*((_WORD *)v8 + 15) )
          {
            ++*((_WORD *)v8 + 16);
            *((_WORD *)v8 + 15) = 0;
          }
        }
        break;
      case 3u:
        sub_8078914((int)&v14);
        v11 = v14;
        v12 = 0x2000;
        do
        {
          v16 = 0;
          v40000D4 = &v16;
          v40000D8 = v11;
          v40000DC = -2063596544;
          v11 += 4096;
          v12 -= 4096;
        }
        while ( v12 > 0x1000 );
        v16 = 0;
        v40000D4 = &v16;
        v40000D8 = v15;
        v40000DC = -2063597056;
        if ( !(sub_8076BE0() << 24) )
          v400000A &= 0xF3u;
        ++LOWORD(dword_3004B20[10 * v1 + 8]);
        goto _080D265C;
      case 4u:
_080D265C:
        v4000050 = 0;
        v4000052 = 0;
        v400000A = v400000A & 0xFC | 1;
        move_anim_task_del(v1);
        break;
      default:
        return v17;
    }
  }
  return v17;
}
