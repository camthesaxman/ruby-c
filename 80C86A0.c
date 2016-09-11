signed int __fastcall sub_80C86A0(int a1)
{
  _BYTE *v1; // r4@1
  signed int v2; // r5@1
  signed int result; // r0@3
  int v4; // r1@6

  v1 = (_BYTE *)a1;
  v2 = 2;
  if ( *(_BYTE *)a1 != 252 || *(_BYTE *)(a1 + 1) != 21 )
  {
    if ( (unsigned __int16)StringLength((_BYTE *)a1) <= 5u && *v1 != 255 )
    {
      while ( 1 )
      {
        v4 = *v1;
        if ( ((v4 + 69) & 0xFFu) > 0x33
          && ((v4 + 95) & 0xFFu) > 9
          && *v1
          && v4 != 173
          && v4 != 184
          && v4 != 171
          && v4 != 172
          && v4 != 181
          && v4 != 182
          && v4 != 186
          && v4 != 174
          && v4 != 176
          && v4 != 177
          && v4 != 178
          && v4 != 179
          && v4 != 177 )
        {
          break;
        }
        if ( *++v1 == 255 )
          goto _080C872A;
      }
      v2 = 1;
    }
_080C872A:
    result = v2;
  }
  else
  {
    result = 2;
  }
  return result;
}
