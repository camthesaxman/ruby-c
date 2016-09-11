void *__fastcall TryGetInvisibleMapObjectScript(int a1, int a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r0@1
  void *v5; // r2@2
  void *result; // r0@3
  unsigned int v7; // r0@4

  v3 = a3;
  v4 = FindInvisibleMapObjectByPosition(
         33744936,
         (*(_WORD *)a1 - 7) & 0xFFFF,
         (*(_WORD *)(a1 + 2) - 7) & 0xFFFF,
         *(_BYTE *)(a1 + 4));
  if ( v4 )
  {
    v5 = *(void **)(v4 + 8);
    if ( v5 )
    {
      v7 = *(_BYTE *)(v4 + 5);
      if ( v7 <= 8 )
      {
        switch ( v7 )
        {
          case 1u:
            if ( v3 != 2 )
              goto _08068494;
            break;
          case 2u:
            if ( v3 != 1 )
              goto _08068494;
            break;
          case 3u:
            if ( v3 != 4 )
              goto _08068494;
            break;
          case 4u:
            if ( v3 != 3 )
              goto _08068494;
            break;
          case 5u:
          case 6u:
          case 7u:
            v202E8CC = HIWORD(v5) + 600;
            v202E8CE = (_WORD)v5;
            if ( (unsigned __int8)FlagGet((unsigned __int16)(HIWORD(v5) + 600)) == 1 )
              goto _08068494;
            return &HiddenItemScript;
          case 8u:
            if ( v3 != 2 )
              goto _08068494;
            v202E8CC = (_WORD)v5;
            if ( !(sub_80BC050() << 24) )
              goto _08068494;
            return &gUnknown_081A2C51;
          default:
            break;
        }
      }
      result = v5;
    }
    else
    {
      result = &gUnknown_081C6C02;
    }
  }
  else
  {
_08068494:
    result = 0;
  }
  return result;
}
