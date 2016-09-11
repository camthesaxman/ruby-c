int __fastcall sub_80A5414(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r1@2
  char *v4; // r4@3
  char v5; // r0@5
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( rfu_lacks_rfufunc() )
  {
    v3 = word_30017A0 & 0xF0;
    switch ( v3 )
    {
      case 64:
        v4 = &byte_3000700;
        if ( byte_3000700 & 1 && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 - 1) != 8 )
        {
          audio_play(5u);
          v5 = -1;
_080A54EE:
          *v4 = MoveMenuCursor3(v5);
          break;
        }
        break;
      case 128:
        v4 = &byte_3000700;
        if ( !(byte_3000700 & 1) && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 + 1) != 8 )
        {
          audio_play(5u);
          v5 = 1;
          goto _080A54EE;
        }
        break;
      case 32:
        v4 = &byte_3000700;
        if ( (unsigned __int8)byte_3000700 > 1u && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 - 2) != 8 )
        {
          audio_play(5u);
          v5 = -2;
          goto _080A54EE;
        }
        break;
      case 16:
        v4 = &byte_3000700;
        if ( (unsigned __int8)byte_3000700 <= 1u && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 + 2) != 8 )
        {
          audio_play(5u);
          v5 = 2;
          goto _080A54EE;
        }
        break;
      default:
        if ( word_300179E & 1 )
        {
          LOWORD(dword_3004B20[10 * v1 + 7]) = 0;
          sub_80A4DA4((int)gBG1TilemapBuffer);
          v2 = (int)*(&off_83C1644 + 2 * *(_BYTE *)(dword_3000704 + (unsigned __int8)byte_3000700));
          call_via_r5(v1);
        }
        else if ( word_300179E & 2 )
        {
          LOWORD(dword_3004B20[10 * v1 + 7]) = 0;
          sub_80A48E8(v1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
          sub_80A4DA4((int)gBG1TilemapBuffer);
          v2 = (int)*(&off_83C1644 + 2 * *(_BYTE *)(dword_3000704 + 3));
          call_via_r5(v1);
        }
        break;
    }
  }
  if ( !v2 )
  {
    if ( byte_3000701 == 5 )
    {
      if ( !byte_3000700 )
      {
        sub_8072DDC(12);
        return v7;
      }
      if ( (unsigned __int8)byte_3000700 > 1u )
      {
        sub_8072DCC(0x30u);
        return v7;
      }
    }
    else if ( (unsigned __int8)byte_3000700 > 1u )
    {
      sub_8072DCC(0x30u);
      return v7;
    }
    sub_8072DCC(0x2Fu);
  }
  return v7;
}
