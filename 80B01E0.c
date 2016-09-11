_BOOL4 unref_sub_80B01E0()
{
  signed int v0; // r3@1
  void (*v1)(); // r1@1

  v0 = 0;
  v1 = (void (*)())dword_2020020[17 * v201920D];
  if ( v1 == SpriteCallbackDummy )
  {
    do
      ++v0;
    while ( v0 <= 3 && (void (*)())dword_2020020[17 * *(_BYTE *)(v0 + 33657357)] == v1 );
  }
  return v0 == 4;
}
