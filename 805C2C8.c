int __fastcall ObjectCB_CameraObject(int a1)
{
  int (*v2)(); // [sp+0h] [bp-18h]@1
  int (*v3)(); // [sp+4h] [bp-14h]@1
  int (*v4)(); // [sp+8h] [bp-10h]@1
  int v5; // [sp+14h] [bp-4h]@1

  v2 = CameraObject_0;
  v3 = CameraObject_1;
  v4 = CameraObject_2;
  call_via_r1(a1, *(&v2 + *(_WORD *)(a1 + 48)));
  return v5;
}
