int __fastcall sub_80B7C14(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3)
{
  unsigned int v3; // r8@1
  int v4; // r6@1
  int v5; // r5@1
  int v7; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  MenuDrawTextWindow(a2, a3);
  sub_80B7BEC(v3, v4, v5);
  LoadCompressedObjectPic((_DWORD *)"\\zç\b");
  LoadCompressedObjectPalette(&gUnknown_083CF58C);
  v2038734 = CreateSprite(
               (int)&gSpriteTemplate_83CF56C,
               (unsigned int)((v4 << 19) + 1245184) >> 16,
               (unsigned int)((v5 << 19) + 720896) >> 16);
  return v7;
}
