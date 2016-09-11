int __fastcall sub_8130B38(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  __int16 v3; // r2@3
  __int16 v4; // r0@7
  __int16 v5; // r2@9
  __int16 v6; // r0@11
  __int16 v7; // r2@13
  __int16 v8; // r2@15
  __int16 v9; // r0@19
  __int16 v10; // r0@21
  __int16 v11; // r0@24
  int v13; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 <= 8 )
  {
    switch ( v2 )
    {
      case 0u:
        *(_WORD *)(v1 + 34) -= 2 * *(_WORD *)(v1 + 60);
        v3 = *(_WORD *)(v1 + 48);
        if ( v3 & 1 )
          *(_WORD *)(v1 + 32) -= 2 * *(_WORD *)(v1 + 60);
        *(_WORD *)(v1 + 48) = v3 + 1;
        if ( (signed __int16)(v3 + 1) == 9 )
          goto _08130CEA;
        break;
      case 1u:
        v4 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v4;
        if ( v4 == 4 )
          goto _08130CEA;
        break;
      case 2u:
        v5 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v5;
        *(_WORD *)(v1 + 34) += 3 * *(_WORD *)(v1 + 60);
        *(_WORD *)(v1 + 36) = (gSineTable[10 * *(_WORD *)(v1 + 48)] << 16 >> 19) * *(_WORD *)(v1 + 60);
        if ( v5 == 12 )
          goto _08130CEA;
        break;
      case 3u:
        v6 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v6;
        if ( v6 == 2 )
          goto _08130CEA;
        break;
      case 4u:
        v7 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v7;
        *(_WORD *)(v1 + 34) -= 3 * *(_WORD *)(v1 + 60);
        *(_WORD *)(v1 + 36) = (gSineTable[10 * *(_WORD *)(v1 + 48)] << 16 >> 19) * *(_WORD *)(v1 + 60);
        if ( v7 == 12 )
          goto _08130CEE;
        break;
      case 5u:
        v8 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v8;
        *(_WORD *)(v1 + 34) += 3 * *(_WORD *)(v1 + 60);
        *(_WORD *)(v1 + 36) = (gSineTable[10 * *(_WORD *)(v1 + 48)] << 16 >> 19) * *(_WORD *)(v1 + 60);
        if ( v8 == 15 )
          *(_WORD *)(v1 + 4) = *(_WORD *)(v1 + 4) & 0xFC00 | ((*(_WORD *)(v1 + 4) & 0x3FF) + 16) & 0x3FF;
        if ( *(_WORD *)(v1 + 48) == 18 )
          goto _08130CEA;
        break;
      case 6u:
        *(_WORD *)(v1 + 32) += 6 * *(_WORD *)(v1 + 60);
        v9 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v9;
        if ( v9 == 9 )
          goto _08130CEA;
        break;
      case 7u:
        *(_WORD *)(v1 + 32) += 2 * *(_WORD *)(v1 + 60);
        v10 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v10;
        if ( v10 == 1 )
        {
_08130CEA:
          *(_WORD *)(v1 + 48) = 0;
_08130CEE:
          ++*(_WORD *)(v1 + 46);
        }
        break;
      case 8u:
        *(_WORD *)(v1 + 32) -= 3 * *(_WORD *)(v1 + 60);
        v11 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v11;
        if ( v11 == 5 )
          move_anim_8072740(v1);
        break;
      default:
        return v13;
    }
  }
  return v13;
}
