unsigned int __fastcall GetStringWidth(int a1, _BYTE *a2)
{
  int v2; // r5@1
  _BYTE *v3; // r7@1
  unsigned int v4; // r2@1
  char v5; // r10@1
  char v6; // r9@1
  char v7; // r8@1
  int v8; // r6@1
  int v9; // r1@2
  int v10; // r6@4
  char v11; // r4@4
  unsigned int v12; // ST00_4@4
  int v13; // r0@4
  int v14; // r6@5
  char v15; // r0@13
  unsigned int v16; // ST00_4@16

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = *(_BYTE *)(a1 + 1);
  v6 = *(_BYTE *)(a1 + 2);
  v7 = *(_BYTE *)(a1 + 14);
  v8 = 0;
  if ( *a2 != 255 )
  {
    do
    {
      v9 = v3[v8];
      if ( v9 == 252 )
      {
        v14 = v8 + 1;
        if ( (unsigned int)v3[v14] - 6 <= 0x10 )
        {
          switch ( v3[v14] )
          {
            case 6:
              *(_BYTE *)(v2 + 1) = v3[v14 + 1];
              break;
            case 7:
              *(_BYTE *)(v2 + 1) = *(_BYTE *)(*(_DWORD *)(v2 + 44) + 8);
              break;
            case 0x11:
              v4 = (v4 + v3[v14 + 1]) & 0xFF;
              break;
            case 0x12:
            case 0x13:
              if ( v4 < v3[v14 + 1] )
                v4 = v3[v14 + 1];
              break;
            case 0x14:
              *(_BYTE *)(v2 + 14) = v3[v14 + 1];
              break;
            case 0x15:
              v15 = 1;
              goto LABEL_15;
            case 0x16:
              v15 = 2;
LABEL_15:
              *(_BYTE *)(v2 + 2) = v15;
              break;
            default:
              break;
          }
        }
        v16 = v4;
        v8 = v14 + (unsigned __int8)GetExtCtrlCodeLength(v3[v14]);
        v4 = v16;
      }
      else if ( v9 == 253 )
      {
        v10 = v8 + 1;
        v11 = *(_BYTE *)(v2 + 2);
        v12 = v4;
        v13 = GetExpandedPlaceholder(v3[v10]);
        v4 = (v12 + GetStringWidth(v2, v13)) & 0xFF;
        *(_BYTE *)(v2 + 2) = v11;
        v8 = v10 + 1;
      }
      else
      {
        ++v8;
        v4 = (v4 + GetGlyphWidth(v2, v9)) & 0xFF;
      }
    }
    while ( v3[v8] != 255 );
  }
  *(_BYTE *)(v2 + 14) = v7;
  *(_BYTE *)(v2 + 2) = v6;
  *(_BYTE *)(v2 + 1) = v5;
  return v4;
}
