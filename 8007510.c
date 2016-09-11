int LinkTestProcessKeyInput()
{
  int v0; // r1@14
  int v2; // [sp+Ch] [bp-4h]@0

  if ( word_300179E & 1 )
    gShouldAdvanceLinkState = 1;
  if ( word_300179C & 2 )
    InitBlockSend(33570816, 8196);
  if ( word_300179E & 0x200 )
    BeginNormalPaletteFade(-1, 0, 16, 0);
  if ( word_300179E & 8 )
    SetSuppressLinkErrorMessage(1);
  if ( word_300179E & 0x100 )
    sub_8125D44(1);
  if ( word_300179E & 4 )
    sub_800832C(word_300179E & 4);
  if ( gLinkTestDebugValuesEnabled )
  {
    v0 = (unsigned __int8)gLinkVSyncDisabled;
    if ( !gLinkCallback )
      v0 = (unsigned __int8)gLinkVSyncDisabled | 0x10;
    SetLinkDebugValues(dword_3001790, v0);
  }
  return v2;
}
