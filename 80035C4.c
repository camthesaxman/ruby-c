signed int __fastcall UpdateWindowText(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r0@6
  int v4; // r0@13
  signed int result; // r0@25
  unsigned int v6; // r0@26
  char v7; // r0@29

  v1 = a1;
  v2 = *(_WORD *)(a1 + 22);
  if ( v2 > 0xA )
  {
def_80035D8:
    *(_WORD *)(v1 + 22) = 0;
LABEL_25:
    result = 1;
  }
  else
  {
    switch ( v2 )
    {
      case 5u:
        if ( PlayerCanInterruptWait(v1) << 24 )
        {
          if ( !(word_300179E & 3) )
            goto LABEL_32;
          audio_play(5);
        }
        else
        {
          v3 = *(_BYTE *)(v1 + 13) - 1;
          *(_BYTE *)(v1 + 13) = v3;
          if ( v3 << 24 )
            goto LABEL_32;
        }
        *(_WORD *)(v1 + 22) = 2;
LABEL_32:
        result = 0;
        break;
      case 3u:
        if ( !(PlayerCanInterruptWait(v1) << 24) || !(word_300179C & 3) || word_30017A4 != 1 )
          goto LABEL_12;
        *(_BYTE *)(v1 + 13) = 0;
        goto LABEL_23;
      case 4u:
LABEL_12:
        if ( !*(_BYTE *)(v1 + 13) )
          goto LABEL_23;
        v4 = *(_BYTE *)(v1 + 13) - 1;
        *(_BYTE *)(v1 + 13) = v4;
        goto LABEL_22;
      case 8u:
        if ( WaitWithDownArrow(v1) << 24 )
        {
          ClearWindowTextLines(v1);
          *(_WORD *)(v1 + 22) = 2;
        }
        goto LABEL_32;
      case 9u:
        if ( WaitWithDownArrow(v1) << 24 )
        {
          ScrollWindowTextLines(v1);
          *(_WORD *)(v1 + 22) = 2;
        }
        goto LABEL_32;
      case 7u:
        ++*(_WORD *)(v1 + 30);
        goto LABEL_23;
      case 6u:
        ScrollWindowTextLines(v1);
        *(_WORD *)(v1 + 22) = 2;
        goto LABEL_32;
      case 1u:
        ClearWindowTextLines(v1);
        goto LABEL_26;
      case 0xAu:
        v4 = mplay_has_finished_maybe();
LABEL_22:
        if ( v4 << 24 )
          goto LABEL_32;
LABEL_23:
        *(_WORD *)(v1 + 22) = 2;
        goto LABEL_26;
      case 0u:
        goto LABEL_25;
      case 2u:
LABEL_26:
        InterpretText(v1);
        v6 = *(_WORD *)(v1 + 22);
        if ( v6 > 0xA )
        {
def_80036F4:
          *(_WORD *)(v1 + 22) = 3;
          v7 = GetTextDelay(v1);
LABEL_31:
          *(_BYTE *)(v1 + 13) = v7;
        }
        else
        {
          switch ( v6 )
          {
            case 0u:
              goto LABEL_25;
            case 5u:
            case 8u:
            case 9u:
              if ( PlayerCanInterruptWait(v1) << 24 )
                goto LABEL_32;
              v7 = 60;
              goto LABEL_31;
            default:
              goto def_80036F4;
            case 4u:
            case 6u:
            case 0xAu:
              goto LABEL_32;
          }
        }
        goto LABEL_32;
      default:
        goto def_80035D8;
    }
  }
  return result;
}
