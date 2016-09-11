_BYTE *__fastcall sub_8056BA0(__int16 a1, __int16 a2)
{
  __int16 v2; // r8@1
  _BYTE *result; // r0@3
  int v4; // r7@4
  _BYTE *v5; // r4@4
  int v6; // r6@4
  int v7; // r5@5
  int v8; // r1@6

  v2 = a1;
  if ( v202E834 && (v4 = *v202E834, v5 = *(_BYTE **)(v202E834 + 4), v6 = 0, *v202E834 > 0) )
  {
    v7 = a2;
    while ( 1 )
    {
      v8 = *v5;
      if ( ((v8 - 5) & 0xFFu) > 1
        && (v8 != 2 || v7 <= 6)
        && (v8 != 1 || v7 >= *(_DWORD *)(v202E828 + 4) + 7)
        && (v8 != 3 || v2 <= 6)
        && (v8 != 4 || v2 >= *v202E828 + 7)
        && sub_8056B60((int)v5, v2 - 7, v7 - 7) == 1 )
      {
        break;
      }
      ++v6;
      v5 += 12;
      if ( v6 >= v4 )
        goto _08056C3E;
    }
    result = v5;
  }
  else
  {
_08056C3E:
    result = 0;
  }
  return result;
}
