int __fastcall Task_TriggerHandshake(unsigned __int8 a1)
{
  int v1; // r2@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == 5 )
  {
    gShouldAdvanceLinkState = 1;
    DestroyTask(v1);
  }
  return v5;
}
