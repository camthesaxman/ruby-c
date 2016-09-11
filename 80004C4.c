int InitIntrHandlers()
{
  void **v0; // r3@1
  _DWORD *v1; // r2@1
  signed int v2; // r1@1
  void *v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v0 = &gIntrTableTemplate;
  v1 = &gIntrTable;
  v2 = 13;
  do
  {
    v3 = *v0;
    ++v0;
    *v1 = v3;
    ++v1;
    --v2;
  }
  while ( v2 >= 0 );
  v40000D4 = IntrMain;
  v40000D8 = &IntrMain_Buffer;
  v40000DC = -2080374272;
  v3007FFC = &IntrMain_Buffer;
  SetVBlankCallback(0);
  SetHBlankCallback(0);
  SetSerialCallback(0);
  v4000208 = 1;
  v4000004 = 8;
  v4000200 = 1;
  return v5;
}
