int __fastcall sub_812E09C(int a1)
{
  int v1; // r4@1
  int v2; // r3@1
  void (*v3)(); // r2@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 17 * *(_WORD *)(a1 + 58);
  v3 = (void (*)())dword_2020020[v2];
  if ( v3 == SpriteCallbackDummy && (void (*)())dword_2020020[17 * *(_WORD *)(a1 + 60)] == v3 )
  {
    DestroySprite((int)&gSprites[v2 * 4]);
    DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 60)]);
    move_anim_8072740(v1);
  }
  return v5;
}
