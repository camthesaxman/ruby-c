int __fastcall CreateAzurillSprite(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r5@1
  __int16 v3; // r6@1

  v2 = a1;
  v3 = a2;
  DecompressPicFromTable_2(&off_81E8E44, 85, 15, 33587200);
  LoadCompressedObjectPalette(&off_81EB0A4);
  GetMonSpriteTemplate_803C56C(350, 1);
  return (unsigned __int8)CreateSprite(33705612, v2, v3);
}
