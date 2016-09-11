int __fastcall move_anim_8072740(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  FreeSpriteOamMatrix(a1);
  DestroySprite(v1);
  --v202F7B2;
  return v3;
}
