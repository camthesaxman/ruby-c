int __fastcall sub_80490BC(unsigned __int8 a1, char a2)
{
  char v2; // r4@1
  signed int v3; // r1@2
  _BYTE *v4; // r0@8
  _BYTE *v5; // r0@21
  _BYTE *v6; // r0@22
  int v8; // [sp+4h] [bp-4h]@0

  v2 = a2;
  if ( a2 & 1 )
  {
    v3 = LOWORD(gBlockRecvBuffer[64 * a1]);
    if ( v3 == 48059 )
    {
      *(_BYTE *)(dword_3004824 + 134) = 1;
    }
    else
    {
      if ( v3 <= 48059 )
      {
        if ( v3 == 43707 )
          *(_BYTE *)(dword_3004824 + 132) = 1;
        goto _08049142;
      }
      if ( v3 == 48076 )
      {
        v4 = (_BYTE *)(dword_3004824 + 134);
        goto _0804913E;
      }
      if ( v3 == 61098 )
      {
        v4 = (_BYTE *)(dword_3004824 + 132);
_0804913E:
        *v4 = 2;
        goto _08049142;
      }
    }
_08049142:
    ResetBlockReceivedFlag(0);
  }
  if ( v2 & 2 )
  {
    if ( (unsigned __int16)word_3002C80 == 48059 )
    {
      v6 = (_BYTE *)(dword_3004824 + 135);
    }
    else
    {
      if ( (signed int)(unsigned __int16)word_3002C80 > 48059 )
      {
        if ( (unsigned __int16)word_3002C80 == 48076 )
        {
          v5 = (_BYTE *)(dword_3004824 + 135);
        }
        else
        {
          if ( (unsigned __int16)word_3002C80 != 61098 )
          {
_080491D4:
            ResetBlockReceivedFlag(1u);
            return v8;
          }
          v5 = (_BYTE *)(dword_3004824 + 133);
        }
        *v5 = 2;
        goto _080491D4;
      }
      if ( (unsigned __int16)word_3002C80 != 43707 )
        goto _080491D4;
      *(_BYTE *)(dword_3004824 + 138) = byte_3002C82 + 6;
      v6 = (_BYTE *)(dword_3004824 + 133);
    }
    *v6 = 1;
    goto _080491D4;
  }
  return v8;
}
