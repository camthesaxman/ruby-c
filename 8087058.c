signed int __fastcall sub_8087058(int a1, _BYTE *a2)
{
  int v2; // r5@1
  _BYTE *v3; // r4@1
  signed int result; // r0@2
  unsigned __int8 v5; // r0@4

  v2 = a1;
  v3 = a2;
  if ( FieldObjectClearAnimIfSpecialAnimFinished(a2) << 24 )
  {
    if ( (unsigned __int8)MetatileBehavior_IsWaterfall(v3[30]) )
    {
      *(_WORD *)(v2 + 8) = 3;
      result = 1;
    }
    else
    {
      script_env_2_disable();
      v202E85E = 0;
      v5 = FindTaskIdByFunc((int)sub_8086F64);
      DestroyTask(v5);
      FieldEffectActiveListRemove(0x2Bu);
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
