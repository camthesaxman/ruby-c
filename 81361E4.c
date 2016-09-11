int sub_81361E4()
{
  int v1; // [sp+4h] [bp-4h]@0

  call_via_r0(*v2039304);
  AnimateSprites();
  BuildOamBuffer();
  UpdatePaletteFade();
  if ( (int (*)())*v2039304 == sub_81365C8 )
  {
    v4000000 = 0;
    *(_BYTE *)(v2039304 + 80) = 0;
    SetMainCallback2((int)sub_813622C);
  }
  return v1;
}
