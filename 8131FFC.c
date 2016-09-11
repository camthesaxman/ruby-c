int __fastcall sub_8131FFC(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r5@3
  int v4; // r2@3
  int *v5; // r1@3
  char *v6; // r1@6
  int *v7; // r2@6
  int v8; // r0@7
  int v9; // r1@7
  int *v10; // r0@10
  char *v11; // r1@11
  int v13; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = HIWORD(dword_3004B20[10 * a1 + 9]);
  if ( v2 > 4 )
  {
def_8132020:
    *(_WORD *)&gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0) + 36] = 0;
    move_anim_task_del(v1);
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 0);
        v4 = (unsigned __int8)sub_8077ABC(v202F7C9, 0);
        v5 = &dword_3004B20[10 * v1];
        *((_WORD *)v5 + 4) = 6;
        if ( v3 > v4 )
          *((_WORD *)v5 + 4) = -6;
        *((_WORD *)v5 + 5) = v3;
        *((_WORD *)v5 + 6) = v4;
        ++*((_WORD *)v5 + 19);
        return v13;
      case 1u:
        v6 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)];
        v7 = &dword_3004B20[10 * v1];
        *((_WORD *)v6 + 18) += *((_WORD *)v7 + 4);
        if ( (signed int)*((_WORD *)v7 + 4) > 0 )
        {
          v8 = *((_WORD *)v6 + 16) + *((_WORD *)v6 + 18);
          v9 = *((_WORD *)v7 + 6);
          goto _0813215E;
        }
        if ( *((_WORD *)v6 + 16) + (signed int)*((_WORD *)v6 + 18) <= *((_WORD *)v7 + 6) )
          goto _08132162;
        return v13;
      case 2u:
        v10 = &dword_3004B20[10 * v1];
        *((_WORD *)v10 + 4) = -*((_WORD *)v10 + 4);
        ++*((_WORD *)v10 + 19);
        return v13;
      case 3u:
        v11 = &gSprites[68 * *(_BYTE *)(v202F7C8 + 0x2024BE0)];
        v7 = &dword_3004B20[10 * v1];
        *((_WORD *)v11 + 18) += *((_WORD *)v7 + 4);
        if ( (signed int)*((_WORD *)v7 + 4) < 0 )
        {
          if ( *((_WORD *)v11 + 16) + (signed int)*((_WORD *)v11 + 18) > *((_WORD *)v7 + 5) )
            return v13;
          goto _08132162;
        }
        v8 = *((_WORD *)v11 + 16) + *((_WORD *)v11 + 18);
        v9 = *((_WORD *)v7 + 5);
_0813215E:
        if ( v8 >= v9 )
        {
_08132162:
          ++*((_WORD *)v7 + 19);
          return v13;
        }
        break;
      default:
        goto def_8132020;
    }
  }
  return v13;
}
