int sub_8132870()
{
  int v1; // [sp+4h] [bp-4h]@0

  sub_8132908();
  if ( *(_BYTE *)(dword_30007B0 + 29) )
  {
    *(_BYTE *)(dword_30007B0 + 29) = 0;
    sub_814AD7C(88, 8 * (2 * *(_BYTE *)(dword_30007B0 + 24) + 1) & 0xFF);
  }
  if ( *(_BYTE *)(dword_30007B0 + 30) )
  {
    *(_BYTE *)(dword_30007B0 + 30) = 0;
    sub_8133800();
  }
  if ( *(_BYTE *)(dword_30007B0 + 707) )
  {
    sub_8133AEC(*(_BYTE *)(dword_30007B0 + 708), 1);
    *(_BYTE *)(dword_30007B0 + 707) = 0;
  }
  RunTasks();
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  return v1;
}
