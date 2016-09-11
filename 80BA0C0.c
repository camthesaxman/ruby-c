int sub_80BA0C0()
{
  int v0; // r0@2
  int v1; // r0@2
  int v3; // [sp+0h] [bp-4h]@0

  LoadOam();
  ProcessSpriteCopyRequests();
  TransferPlttBuffer();
  if ( v20387B0 )
  {
    v0 = ((int (*)(void))m4aSoundMain)();
    v1 = m4aSoundMain(v0);
    m4aSoundMain(v1);
  }
  return v3;
}
