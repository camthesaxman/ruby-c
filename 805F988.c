int __fastcall FieldObjectCB_TreeDisguise(int a1)
{
  int v1; // r5@1
  int *v2; // r4@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * *(_WORD *)(a1 + 46)];
  if ( !*((_BYTE *)v2 + 33) || *((_BYTE *)v2 + 33) == 1 && !*(_WORD *)(a1 + 60) )
  {
    FieldObjectGetLocalIdAndMap((int)v2, (_BYTE *)0x202FF84, (_BYTE *)0x202FF88, (_BYTE *)0x202FF8C);
    *((_BYTE *)v2 + 26) = FieldEffectStart(28);
    *((_BYTE *)v2 + 33) = 1;
    ++*(_WORD *)(v1 + 60);
  }
  meta_step(&dword_30048A0[9 * *(_WORD *)(v1 + 46)]);
  return v4;
}
