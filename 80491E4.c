int __fastcall sub_80491E4(int a1, char a2)
{
  char v2; // r5@1
  char *v3; // r0@10
  char v4; // r1@10
  signed int v5; // r0@11
  int v7; // [sp+Ch] [bp-4h]@0

  v2 = a2;
  if ( a2 & 1 )
  {
    if ( LOWORD(gBlockRecvBuffer[0]) == 56814 )
    {
      v5 = 1;
    }
    else
    {
      if ( (signed int)LOWORD(gBlockRecvBuffer[0]) <= 56814 )
      {
        if ( LOWORD(gBlockRecvBuffer[0]) == 52445 )
        {
          BeginNormalPaletteFade(-1, 0, 0, 16);
          v3 = (char *)(dword_3004824 + 123);
          v4 = 10;
        }
        else
        {
          if ( LOWORD(gBlockRecvBuffer[0]) != 56797 )
            goto _080492B8;
          *(_BYTE *)(dword_3004824 + 138) = BYTE2(gBlockRecvBuffer[0]) + 6;
          sub_8049E9C(*(_BYTE *)(dword_3004824 + 65));
          sub_8049E9C(*(_BYTE *)(dword_3004824 + 138));
          v3 = (char *)(dword_3004824 + 123);
          v4 = 7;
        }
_080492B6:
        *v3 = v4;
_080492B8:
        ResetBlockReceivedFlag(0);
        goto _080492BE;
      }
      if ( LOWORD(gBlockRecvBuffer[0]) == 61115 )
      {
        BeginNormalPaletteFade(-1, 0, 0, 16);
        sub_804AA0C(4);
        v3 = (char *)(dword_3004824 + 123);
        v4 = 11;
        goto _080492B6;
      }
      if ( LOWORD(gBlockRecvBuffer[0]) != 61132 )
        goto _080492B8;
      v5 = 5;
    }
    sub_804AA0C(v5);
    v3 = (char *)(dword_3004824 + 123);
    v4 = 8;
    goto _080492B6;
  }
_080492BE:
  if ( v2 & 2 )
    ResetBlockReceivedFlag(1u);
  return v7;
}
