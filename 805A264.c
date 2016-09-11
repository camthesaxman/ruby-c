int __fastcall taskFF_0805D1D4(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r5@1
  int *v3; // r4@3
  unsigned __int8 v4; // r0@3
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = &dword_30048A0[9 * v202E85D];
  if ( !(FieldObjectIsSpecialAnimOrDirectionSequenceAnimActive(v2) << 24)
    || FieldObjectClearAnimIfSpecialAnimFinished(v2) << 24 )
  {
    sub_8127ED0(*((_BYTE *)v2 + 26), 2);
    v3 = &dword_3004B20[10 * v1];
    v4 = sub_80608D0(*((_BYTE *)v3 + 8));
    FieldObjectSetSpecialAnim(v2, v4);
    *v3 = (int)sub_805A2D0;
  }
  return v6;
}
