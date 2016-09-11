int __fastcall FieldEffectStart(unsigned __int8 a1)
{
  int v1; // r4@1
  void **v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+4h] [bp-10h]@2

  v1 = a1;
  FieldEffectActiveListAdd(a1);
  v3 = (&gFieldEffectScriptPointers)[v1];
  while ( call_via_r2(&v3, &v4, *(&gUnknown_0839F0D4 + *(_BYTE *)v3)) << 24 )
    ;
  return v4;
}
