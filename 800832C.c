int sub_800832C()
{
  char v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = gLinkCallback;
  if ( !gLinkCallback )
  {
    gLinkCallback = (int)sub_8008350;
    gLinkDummyBool = v0;
  }
  return v2;
}
