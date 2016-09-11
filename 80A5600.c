int __fastcall sub_80A5600(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  char *v4; // r4@2
  char v5; // r0@4
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  v3 = word_30017A0 & 0xF0;
  switch ( v3 )
  {
    case 64:
      v4 = &byte_3000700;
      if ( byte_3000700 && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 - 1) != 8 )
      {
        audio_play(5u);
        v5 = -1;
_080A56D2:
        *v4 = MoveMenuCursor3(v5);
        break;
      }
      break;
    case 128:
      v4 = &byte_3000700;
      if ( (unsigned __int8)byte_3000700 != v2038564 - 1
        && byte_3000700 != 2
        && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 + 1) != 8 )
      {
        audio_play(5u);
        v5 = 1;
        goto _080A56D2;
      }
      break;
    case 32:
      v4 = &byte_3000700;
      if ( (unsigned __int8)byte_3000700 > 2u && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 - 3) != 8 )
      {
        audio_play(5u);
        v5 = -3;
        goto _080A56D2;
      }
      break;
    case 16:
      v4 = &byte_3000700;
      if ( (unsigned __int8)byte_3000700 <= 2u && *(_BYTE *)((unsigned __int8)byte_3000700 + dword_3000704 + 3) != 8 )
      {
        audio_play(5u);
        v5 = 3;
        goto _080A56D2;
      }
      break;
    default:
      if ( word_300179E & 1 )
      {
        LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
        sub_80A4DA4((int)gBG1TilemapBuffer);
        v2 = (int)*(&off_83C1644 + 2 * *(_BYTE *)(dword_3000704 + (unsigned __int8)byte_3000700));
        call_via_r5(v1);
      }
      else if ( word_300179E & 2 )
      {
        LOWORD(dword_3004B20[10 * a1 + 7]) = 0;
        sub_80A48E8(a1, byte_3005D10[4 * v2038559], (unsigned __int8)byte_3005D10[4 * v2038559]);
        sub_80A4DA4((int)gBG1TilemapBuffer);
        v2 = (int)*(&off_83C1644 + 2 * *(_BYTE *)(dword_3000704 + 5));
        call_via_r5(v1);
      }
      break;
  }
  if ( !v2 )
  {
    if ( byte_3000700 )
    {
      if ( (unsigned __int8)byte_3000700 > 2u )
        sub_8072DCC(0x30u);
      else
        sub_8072DCC(0x2Fu);
    }
    else
    {
      sub_8072DDC(12);
    }
  }
  return v7;
}
