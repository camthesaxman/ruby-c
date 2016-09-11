int sub_80084A4()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !gLinkCallback )
    gLinkCallback = (int)sub_80084C8;
  gLinkDummyBool = 0;
  return v1;
}
